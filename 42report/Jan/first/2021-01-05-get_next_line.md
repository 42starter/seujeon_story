---
bg: "42Seoul.jpg"
layout: post
title:  "get_next_line"
crawlertitle: "get_next_line"
summary: "get_next_line"
date: 2021-01-05 23:00:00 +0900
category: 42Seoul
author: Err0rCode7
---

42 Seoul - get_next_line 구현 프로젝트를 진행한 내용을 정리하여 포스팅을 진행합니다.

---

20210105(화)

## 1. 학습날짜

- 2021-01-05(화)
<br>

## 2. 학습시간

- 13:00 ~ 19:00(가택), 20:00 ~ 22:00(가택)
<br>

## 3. 학습 범위 및 주제

- get_next_line 프로젝트 이해와 구현

## 4. 동료 학습 방법

- jayi, seoklee, juoh, mingyuki와 discord를 이용한 음성 채팅과 화면 공유를 통해 get_next_line 구현 방법 소통
<br>

## 5. 학습 목표

- get_next_line 함수 구현
<br>

## 6. 상세 학습 내용

0. 총 학습 시간: 프로그램 개발과 디버깅 7시간 정리 1시간

1. get_next_line 보너스 구현 방향 탐색

	get_next_line의 보너스 구현은 static 변수를 사용해서 각각의 fd에 대한 buffer를 저장해놓는 것을 구현하는 것이다.

	보너스를 구현하는 방법을 동료들과 논의하였고 두 가지의 방법을 떠올렸다.

	둘 다 static 변수를 사용하는데, 하나는 각각의 다른 fd 값을 배열로 처리하는 방법이고 다른 하나는 연결리스트로 처리하는 방법이다.

	배열로 처리하게되면 index를 사용하기 때문에 처리하기가 편하다. 하지만 fd의 범위가 없다면 `malloc realloc` 을 해야하던지 까다로워지는데,
	`get_next_line` 에서 fd의 hard limit이 65536 이므로 heap 메모리에서 처리가 아닌 stack 메모리에서 처리가 충분히 가능하게된다.
	따라서 동적할당을 안사용하고 stack 배열을 사용하는 방법은 간편하게 구현이 가능하다.

	다른 나머지 방법인 연결리스트 방법은 head를 static 변수로 한 연결리스트를 만들어서 새로운 fd가 들어올 때 마다 추가하여 저장해놓는 방법이다.
	따라서 `lstadd` 와 `find_lst` 가 필요하다. 그리고 연결리스트의 형태는 `fd` 값과 `char *` 의 buffer 값을 저장해야한다.

2. get_next_line 디버깅

	나의 코드는 배열을 보너스 이용하여 구현하였고 동료의 코드는 리스트를 이용하여 구현하였다. Get_Next_Line_Tester, 42TESTERS-GNL, gnlkiller, GNL_lover, 42cursus_gnl_tests, gnl-war-machine-v2019, gnlTester 총 7개의 테스터기를 이용해서 문제가 있는지 테스트를 진행하였다.

	동료의 코드인 연결리스트의 경우 head를 연결하는 부분에서 실수가 많았고 나의 코드에서는 인덱스 부분을 실수하거나 free가 안된 부분이 있어서 문제가 생겼었다.


## 7. 학습 내용에 대한 개인적인 총평

- get_next_line 을 100% 완성하였다.

- 동료와 함께 코드를 리뷰하면서 좋은 방법을 탐색해볼 수 있었고 서로에게 많은 도움을 줄 수 있어서 좋았다.

- 앞으로 프로젝트를 진행할 때 더 동료와 함께 성장하는 방향으로 하는 것이 좋을 것 같다.

## 8. 다음 학습 계획

- ft_printf 도전

- ft_printf 구현

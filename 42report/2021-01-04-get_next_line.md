---
bg: "42Seoul.jpg"
layout: post
title:  "get_next_line"
crawlertitle: "get_next_line"
summary: "get_next_line"
date: 2021-01-04 23:00:00 +0900
category: 42Seoul
author: Err0rCode7
---

42 Seoul ft_libft 라이브러리 구현 프로젝트를 진행한 내용을 정리하여 포스팅을 진행합니다.

---

20210104(월)

## 1. 학습날짜

- 2021-01-04(월)
<br>

## 2. 학습시간

- 11:00 ~ 15:00(가택), 16:00 ~ 22:00(가택)
<br>

## 3. 학습 범위 및 주제

- get_next_line 프로젝트 이해와 구현

## 4. 동료 학습 방법

- jayi, seoklee, seonhong, taewakim와 discord를 이용한 음성 채팅과 화면 공유를 통해 get_next_line 구현 방법 소통
<br>

## 5. 학습 목표

- get_next_line 함수 구현
<br>

## 6. 상세 학습 내용

0. 총 학습 시간: 프로그램 개발과 디버깅 9시간 정리 1시간

1. get_next_line 함수 이해

- `int	get_next_line(int fd, char **line)`

	프로토 타입은 위와 같으며 `get_next_line.c` , `get_next_line_utils.c` , `get_next_line.h` 를 제출해야한다.

	컴파일 옵션에 `-D BUFFER_SIZE=값` 을 같이 하는 것으로 `BUFFER_SIZE` 를 설정할 수 있도록 해야한다.

	`get_next_line` 함수는 파일 디스크립터 `fd`와 한 줄을 저장할 `line` 을 인자로 받아 파일에 내용을 한 줄 만큼 읽어오는 함수이다.

	반환 값으로 한 줄을 읽는 것이 성공하였을 때 1, EOF일 경우에 0, 오류가 났을 때 -1을 반환한다.

	읽을 때에는 항상 `BUFFER_SIZE` 만큼을 읽어야하며 읽어온 한 줄은 동적할당이 되어 `line` 에 할당해야한다. 또한 `BUFFER_SIZE` 만큼 읽고 한 줄을 추가하고 남은 부분을 저장해두어야 하는데 이때 `static` 변수를 이용해야 한다.

	보너스로 점수를 받으려면 static 변수를 사용해야 하고 `fd` 값이 달라졌을 때 각각의 fd에 대하여 `BUFFER_SIZE` 만큼 읽고 남은 값들이 저장되어 있어야 한다.

2. get_next_line 구현

	다음과 같은 로직으로 구현하였다.

	1. `fd`, `BUFFER_SIZE`, `line` 에 대한 예외처리
	2. 이전에 `fd` 를 읽고 남은 값이 있다면 그 문자열에서 개행까지의 내용을 line에 새롭게 복사하여 할당한다.
	3. 이전에 내용이 없거나 이전 내용에 개행이 없다면 `buf` 배열을 만들고 `BUFFER_SIZE` 만큼 읽어나간다.
	4. 읽은 값에 개행이 있다면 이전에 있던 배열과 `buf` 의 개행까지를 `line` 에 복사하고 `buf` 에서 남은 값을 static 변수에 저장한다.
	5. 읽은 값에 개행이 없다면 `buf` 를 `line` 에 이어 붙이고 계속해서 4, 5번 을 반복하는데, 이 때 읽은 길이가 `BUFFER_SIZE` 보다 작으면 EOF 이므로 바로 빠져나온다.
	6. 4, 5 과정에서 끝나지 않았으면 남은 `line` 의 값을 반환하거나 `line` 의 값이 없으면 빈 문자열을 복사해서 반환한다.

3. get_next_line 오류 목록

	- `ft_calloc` 을 통해 동적할당과 동시에 배열을 초기화를 해서 `BUFFER_SIZE` 가 커졌을 때 타임아웃이 발생하였다.

	- gnlTester 테스터기에서 `wrong fd` 가 들어왔을 때 `heap buffer overflow` 가 발생했다.

	- gnlkiller 테스터기에서 `BUFFER_SIZE` 가 1024일 때와 4096일 때 오류가 발생했다.


## 7. 학습 내용에 대한 개인적인 총평

- get_next_line 을 60% 완성하였다.

- 피씬 때 했던 hexdump 와 cat, BSQ 과정을 다시한번 떠올리게 되었고 그 내용들을 복습할 수 있었다.

- c 언어의 동적할당 관리가 정말 어렵구나라는 걸 느끼게 되었다. 메모리 관리를 철저히 잘 해야겠다.. `-g3 -fsanitize=address` 해당 옵션으로  컴파일하면 heap 영역을 잘 참조하고 있는지 볼 수 있다.

## 8. 다음 학습 계획

- get_next_line 완성

- 테스터기를 이용한 함수 오류 확인

- printf 도전

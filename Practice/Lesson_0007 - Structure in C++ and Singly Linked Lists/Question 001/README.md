# Music Player System

## Current Song List

| No | Artist          | Song               | Released | Genre | Length |
| -- | --------------- | ------------------ | -------- | ----- | ------ |
| 1  | Celine Dion     | Just Walk Away     | 1993     | Pop   | 4.58   |
| 2  | Taylor Swift    | You Belong With Me | 2008     | Pop   | 3.48   |
| 3  | The Cranberries | Promises           | 1999     | Rock  | 4.30   |

---

## Functionalities of the Music Player System

### 1. Insert at the Beginning of the Song List

* User is able to insert a new song at the **front of the list**.

#### Example Output

| No | Artist          | Song                            | Released | Genre    | Length |
| -- | --------------- | ------------------------------- | -------- | -------- | ------ |
| 4  | Maria Carey     | All I Want For Christmas Is You | 1994     | Seasonal | 3.55   |
| 1  | Celine Dion     | Just Walk Away                  | 1993     | Pop      | 4.58   |
| 2  | Taylor Swift    | You Belong With Me              | 2008     | Pop      | 3.48   |
| 3  | The Cranberries | Promises                        | 1999     | Rock     | 4.30   |

---

### 2. Insert at the End of the Song List

* User is able to insert a new song at the **end of the list**.

#### Example Output

| No | Artist             | Song                            | Released | Genre     | Length |
| -- | ------------------ | ------------------------------- | -------- | --------- | ------ |
| 4  | Maria Carey        | All I Want For Christmas Is You | 1994     | Seasonal  | 3.55   |
| 1  | Celine Dion        | Just Walk Away                  | 1993     | Pop       | 4.58   |
| 2  | Taylor Swift       | You Belong With Me              | 2008     | Pop       | 3.48   |
| 3  | The Cranberries    | Promises                        | 1999     | Rock      | 4.30   |
| 5  | Selena Gomez, Kygo | It Ain't Me                     | 2017     | Dance-pop | 3.41   |

---

### 3. View the List Without Sorting

* User is able to view the **current song list without sorting**, after insertions.

#### Example Output

| No | Artist             | Song                            | Released | Genre     | Length |
| -- | ------------------ | ------------------------------- | -------- | --------- | ------ |
| 4  | Maria Carey        | All I Want For Christmas Is You | 1994     | Seasonal  | 3.55   |
| 1  | Celine Dion        | Just Walk Away                  | 1993     | Pop       | 4.58   |
| 2  | Taylor Swift       | You Belong With Me              | 2008     | Pop       | 3.48   |
| 3  | The Cranberries    | Promises                        | 1999     | Rock      | 4.30   |
| 5  | Selena Gomez, Kygo | It Ain't Me                     | 2017     | Dance-pop | 3.41   |

---

### 4. View the List Sorted by Song Number

* User is able to **view the song list sorted based on the song number** using the **insert into sorted list concept**.

#### Example Output

| No | Artist             | Song                            | Released | Genre     | Length |
| -- | ------------------ | ------------------------------- | -------- | --------- | ------ |
| 1  | Celine Dion        | Just Walk Away                  | 1993     | Pop       | 4.58   |
| 2  | Taylor Swift       | You Belong With Me              | 2008     | Pop       | 3.48   |
| 3  | The Cranberries    | Promises                        | 1999     | Rock      | 4.30   |
| 4  | Maria Carey        | All I Want For Christmas Is You | 1994     | Seasonal  | 3.55   |
| 5  | Selena Gomez, Kygo | It Ain't Me                     | 2017     | Dance-pop | 3.41   |

---

## Additional Functions (Lab 7)

### 5. Delete a Song from the Beginning of the List

* User is able to **delete the first song in the list**.

#### Original Output

| No | Artist             | Song                            | Released | Genre     | Length |
| -- | ------------------ | ------------------------------- | -------- | --------- | ------ |
| 4  | Maria Carey        | All I Want For Christmas Is You | 1994     | Seasonal  | 3.55   |
| 1  | Celine Dion        | Just Walk Away                  | 1993     | Pop       | 4.58   |
| 2  | Taylor Swift       | You Belong With Me              | 2008     | Pop       | 3.48   |
| 3  | The Cranberries    | Promises                        | 1999     | Rock      | 4.30   |
| 5  | Selena Gomez, Kygo | It Ain't Me                     | 2017     | Dance-pop | 3.41   |

#### Output After Deletion

| No | Artist             | Song               | Released | Genre     | Length |
| -- | ------------------ | ------------------ | -------- | --------- | ------ |
| 1  | Celine Dion        | Just Walk Away     | 1993     | Pop       | 4.58   |
| 2  | Taylor Swift       | You Belong With Me | 2008     | Pop       | 3.48   |
| 3  | The Cranberries    | Promises           | 1999     | Rock      | 4.30   |
| 5  | Selena Gomez, Kygo | It Ain't Me        | 2017     | Dance-pop | 3.41   |

---

### 6. Delete a Song from the End of the List

* User is able to **delete the last song in the list**.

#### Original Output

| No | Artist             | Song                            | Released | Genre     | Length |
| -- | ------------------ | ------------------------------- | -------- | --------- | ------ |
| 4  | Maria Carey        | All I Want For Christmas Is You | 1994     | Seasonal  | 3.55   |
| 1  | Celine Dion        | Just Walk Away                  | 1993     | Pop       | 4.58   |
| 2  | Taylor Swift       | You Belong With Me              | 2008     | Pop       | 3.48   |
| 3  | The Cranberries    | Promises                        | 1999     | Rock      | 4.30   |
| 5  | Selena Gomez, Kygo | It Ain't Me                     | 2017     | Dance-pop | 3.41   |

#### Output After Deletion

| No | Artist          | Song                            | Released | Genre    | Length |
| -- | --------------- | ------------------------------- | -------- | -------- | ------ |
| 4  | Maria Carey     | All I Want For Christmas Is You | 1994     | Seasonal | 3.55   |
| 1  | Celine Dion     | Just Walk Away                  | 1993     | Pop      | 4.58   |
| 2  | Taylor Swift    | You Belong With Me              | 2008     | Pop      | 3.48   |
| 3  | The Cranberries | Promises                        | 1999     | Rock     | 4.30   |

---

### 7. Delete a Song Based on Artist Name

* User is able to **delete a song based on the artist name**.

Example: Delete the song by **Taylor Swift**

#### Output After Deletion

| No | Artist             | Song                            | Released | Genre     | Length |
| -- | ------------------ | ------------------------------- | -------- | --------- | ------ |
| 4  | Maria Carey        | All I Want For Christmas Is You | 1994     | Seasonal  | 3.55   |
| 1  | Celine Dion        | Just Walk Away                  | 1993     | Pop       | 4.58   |
| 3  | The Cranberries    | Promises                        | 1999     | Rock      | 4.30   |
| 5  | Selena Gomez, Kygo | It Ain't Me                     | 2017     | Dance-pop | 3.41   |

---

### 8. Delete a Song Based on Song Number

* User is able to **delete a song based on the song number**.

Example: Delete the song with **song number 3**

#### Output After Deletion

| No | Artist             | Song                            | Released | Genre     | Length |
| -- | ------------------ | ------------------------------- | -------- | --------- | ------ |
| 4  | Maria Carey        | All I Want For Christmas Is You | 1994     | Seasonal  | 3.55   |
| 1  | Celine Dion        | Just Walk Away                  | 1993     | Pop       | 4.58   |
| 2  | Taylor Swift       | You Belong With Me              | 2008     | Pop       | 3.48   |
| 5  | Selena Gomez, Kygo | It Ain't Me                     | 2017     | Dance-pop | 3.41   |

---

### 9. Search a Song Based on Genre

* User is able to **search songs based on the genre of the song**.

Example: Searching for **Pop songs**

#### Example Output

| No | Artist       | Song               | Released | Genre | Length |
| -- | ------------ | ------------------ | -------- | ----- | ------ |
| 1  | Celine Dion  | Just Walk Away     | 1993     | Pop   | 4.58   |
| 2  | Taylor Swift | You Belong With Me | 2008     | Pop   | 3.48   |

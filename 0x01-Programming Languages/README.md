# Programming languages

The Programming Languages course focuses on the use of different programming languages, their classification and different Japanese paradigms, as well as compilation and interpretation. The practical part includes a set of practical tasks, each of which is proposed to be completed in two languages.

## Task-1. Minimalist Wget
- Using multitasking and synchronization primitives, implement a file download over HTTP that displays the number of bytes received every second.

- For implementation, it is recommended to use `http.client`.
The program takes the file URL as a command-line argument and downloads it to the current folder, preserving the original name. Every second, a timer should output the size of the received data.

- The solution should preferably be in the form of a single file and function as a console utility.

- **Base language**: `Python` (other scripting languages are allowed except JavaScript).

## Task 2. Time Server 
- Develop a web application (e.g., via the WSGI interface) that replicates a service similar to time.is and supports working with time zones using the `tz`library:

- For a GET `/` request, the application should return the current time in the server's time zone in HTML format.
- For a GET `/<tz name>` request, it should return the current time in the requested time zone in HTML format.
- For a POST `/api/v1/time`request, it should return the current time in JSON format for the specified tz parameter (or the server's time zone if tz is not provided).
- For a POST `/api/v1/date `request, it should return the current date in JSON format for the specified tz parameter (or the server's time zone if tz is not provided).
- For a POST `/api/v1/datediff` request, it should return the time difference in JSON format between two dates specified by the start and end parameters. Each parameter is a JSON object like:
`{"date": "12.20.2021 22:21:05", "tz": "EST"}`
`{"date": "12:30pm 2020-12-01", "tz": "Europe/Moscow"}`
- The tz field is optional.
**Constraints:**
- The use of web frameworks is not allowed.
- The code must be contained in a single file.
- The solution must include tests written using the requests library to test each API endpoint.

## Task 2. Mobile application - password manager (only PWA)  
- It is necessary to develop a Progressive Web App (PWA) that can be installed as a mobile application.  

- A minimum set consisting of a manifest, service-worker.js, icons, and HTML markup with code (or a separate js file with code) needs to be implemented. It is not required to implement a separate backend.  

- The application should function as a password manager with local data storage in localStorage (and/or in IndexedDB) and the ability to generate a password with the required complexity. Thus, the web application stores data in the user's browser, without a backend.  

- Upon opening, the user should see a list of saved passwords and a form for adding a new one (login, password, url).  



<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>PolyU CS Studies</title>
    <style>
        @import url('https://fonts.googleapis.com/css2?family=Inter:wght@300;400;500&display=swap');

        body {
            font-family: 'Inter', sans-serif;
            line-height: 1.6;
            max-width: 900px;
            margin: 0 auto;
            padding: 2rem;
            background: #fafafa;
            color: #333;
        }

        .container {
            opacity: 0;
            animation: fadeIn 1s ease-in forwards;
        }

        .section {
            margin: 2rem 0;
            padding: 1.5rem;
            border-radius: 12px;
            background: white;
            box-shadow: 0 4px 6px rgba(0, 0, 0, 0.05);
            transition: transform 0.2s ease;
        }

        .section:hover {
            transform: translateY(-2px);
        }

        .semester {
            margin: 1.5rem 0;
            padding-left: 1rem;
            border-left: 2px solid #eee;
        }

        .course {
            display: flex;
            align-items: center;
            margin: 0.8rem 0;
            padding: 0.5rem;
            border-radius: 6px;
            transition: background 0.2s ease;
        }

        .course:hover {
            background: #f5f5f5;
        }

        .course-code {
            font-family: monospace;
            color: #666;
            margin-right: 1rem;
            padding: 0.2rem 0.5rem;
            background: #f0f0f0;
            border-radius: 4px;
            font-size: 0.9em;
        }

        h1, h2, h3 {
            font-weight: 500;
            color: #2c3e50;
        }

        h1 {
            font-size: 2.5rem;
            margin-bottom: 0.5rem;
        }

        h2 {
            font-size: 1.8rem;
            margin: 2rem 0 1rem;
        }

        h3 {
            font-size: 1.3rem;
            color: #34495e;
        }

        @keyframes fadeIn {
            from { opacity: 0; transform: translateY(10px); }
            to { opacity: 1; transform: translateY(0); }
        }

        .header {
            text-align: center;
            margin-bottom: 3rem;
        }

        .subtitle {
            color: #666;
            font-size: 1.1rem;
        }

        .year-label {
            display: inline-block;
            padding: 0.2rem 0.8rem;
            background: #f8f9fa;
            border-radius: 20px;
            font-size: 0.9rem;
            color: #666;
            margin-bottom: 1rem;
        }
    </style>
</head>
<body>
    <div class="container">
        <div class="header">
            <h1>polyu cs studies</h1>
            <p class="subtitle">computer science with business economics minor</p>
            <span class="year-label">2022 - 2026</span>
        </div>

        <div class="section">
            <h2>year one</h2>
            <div class="semester">
                <h3>semester 1</h3>
                <div class="course">
                    <span class="course-code">ama1104</span>
                    <span>introductory probability</span>
                </div>
                <div class="course">
                    <span class="course-code">apss1l01</span>
                    <span>tomorrow's leaders</span>
                </div>
                <div class="course">
                    <span class="course-code">comp1002</span>
                    <span>computational thinking and problem solving</span>
                </div>
                <div class="course">
                    <span class="course-code">comp1004</span>
                    <span>introduction to artificial intelligence and data analytics</span>
                </div>
                <div class="course">
                    <span class="course-code">elc1013</span>
                    <span>english for university studies</span>
                </div>
                <div class="course">
                    <span class="course-code">mm1031</span>
                    <span>introduction to innovation and entrepreneurship</span>
                </div>
            </div>

            <div class="semester">
                <h3>semester 2</h3>
                <div class="course">
                    <span class="course-code">apss1bn18</span>
                    <span>from gloom to bloom: global new urbanism</span>
                </div>
                <div class="course">
                    <span class="course-code">clc1151</span>
                    <span>chinese i</span>
                </div>
                <div class="course">
                    <span class="course-code">comp1011</span>
                    <span>programming fundamentals</span>
                </div>
                <div class="course">
                    <span class="course-code">comp1411</span>
                    <span>introduction to computer systems</span>
                </div>
                <div class="course">
                    <span class="course-code">comp1433</span>
                    <span>introduction to data analytics</span>
                </div>
            </div>
        </div>

        <div class="section">
            <h2>year two</h2>
            <div class="semester">
                <h3>semester 1</h3>
                <div class="course">
                    <span class="course-code">comp2011</span>
                    <span>data structures</span>
                </div>
                <div class="course">
                    <span class="course-code">comp2012</span>
                    <span>discrete mathematics</span>
                </div>
                <div class="course">
                    <span class="course-code">comp2021</span>
                    <span>object-oriented programming</span>
                </div>
                <div class="course">
                    <span class="course-code">comp2411</span>
                    <span>database systems</span>
                </div>
                <div class="course">
                    <span class="course-code">comp2s01</span>
                    <span>technology beyond borders</span>
                </div>
            </div>

            <div class="semester">
                <h3>semester 2</h3>
                <div class="course">
                    <span class="course-code">af1605</span>
                    <span>introduction to economics</span>
                </div>
                <div class="course">
                    <span class="course-code">apss1a04</span>
                    <span>understanding ethics in daily life</span>
                </div>
                <div class="course">
                    <span class="course-code">comp2322</span>
                    <span>computer networking</span>
                </div>
                <div class="course">
                    <span class="course-code">comp2421</span>
                    <span>computer organization</span>
                </div>
                <div class="course">
                    <span class="course-code">comp2432</span>
                    <span>operating systems</span>
                </div>
                <div class="course">
                    <span class="course-code">comp2s01</span>
                    <span>technology beyond borders</span>
                </div>
            </div>
        </div>

        <div class="section">
            <h2>year three</h2>
            <div class="semester">
                <h3>semester 1</h3>
                <div class="course">
                    <span class="course-code">ama1d07</span>
                    <span>introduction to cosmology</span>
                </div>
                <div class="course">
                    <span class="course-code">comp4123</span>
                    <span>business processes and workflow management</span>
                </div>
                <div class="course">
                    <span class="course-code">cbs1m41</span>
                    <span>chinese language: myths vs facts</span>
                </div>
                <div class="course">
                    <span class="course-code">comp3423</span>
                    <span>human computer interaction</span>
                </div>
                <div class="course">
                    <span class="course-code">comp3211</span>
                    <span>software engineering</span>
                </div>
                <div class="course">
                    <span class="course-code">comp3438</span>
                    <span>system programming</span>
                </div>
            </div>
        </div>
    </div>
</body>
</html>

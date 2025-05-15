# CMDcontrol


## 

## Tecnologías
- C++17
- Multithreading (`std::thread`, `std::mutex`)
- Patrón Observer simplificado
- Estructura modular orientada a componentes

## Coses a mirar
- Atomic
- Mutex
- lock_guard
- namespaces(espacios de nombre)
- threads(bastant)
- punters vs referencies...


## Coses mirades:
- Constructors i lista de inicializacion de miembros -> basicament com montar o fer constructors d'una forma mes rapida i llegible entenc
- Threads:
    - .join() -> lo que fa es esperar a que es thread acabi per seguir amb el main, es una forma de garantir sincronitzacio
    - 
- unique_ptr -> punter inteligent(administra automaticament memoria, no hem de fer delete ni coses aixi, ho fa totsol)
    - std::unique_ptr<RadarSensor> r = std::make_unique<RadarSensor>(&awareness, i);


## Cómo compilar
```bash
mkdir build && cd build
cmake ..
make
```

## Cómo ejecutar
```bash
./naval_cmd_control_sim
```

## Comandos disponibles
- `status`: Muestra los datos actuales del radar
- `exit`: Finaliza la simulación

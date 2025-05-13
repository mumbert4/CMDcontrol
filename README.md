# CMDcontrol


## Descripción
Este proyecto simula un sistema básico de mando y control naval en C++, inspirado en los requisitos de Thales. Contiene sensores simulados (radar), una interfaz de comando y un módulo de conciencia situacional que procesa los datos.

## Tecnologías
- C++17
- Multithreading (`std::thread`, `std::mutex`)
- Patrón Observer simplificado
- Estructura modular orientada a componentes

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

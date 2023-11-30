import { Controller, Get } from '@nestjs/common';
import { PontosService } from '../service/pontos.service';

@Controller('pontos')
export class PontosController {
  constructor(private readonly pontosService: PontosService) {}

  @Get()
  getPage() {
    return this.pontosService.getPage();
  }
}

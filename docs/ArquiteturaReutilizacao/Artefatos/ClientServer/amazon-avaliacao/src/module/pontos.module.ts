import { Module } from '@nestjs/common';
import { PontosController } from '../controller/pontos.controller';
import { PontosService } from '../service/pontos.service';

@Module({
  imports: [],
  controllers: [PontosController],
  providers: [PontosService],
})
export class PontosModule {}

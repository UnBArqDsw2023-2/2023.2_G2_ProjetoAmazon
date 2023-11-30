import { Controller, Get, Res } from '@nestjs/common';
import { AppService } from '../service/app.service';
import { type Response } from 'express';

@Controller()
export class AppController {
  constructor(private readonly appService: AppService) {}

  @Get()
  getGetPage(@Res() response: Response) {
    return this.appService.getPage(response);
  }
}

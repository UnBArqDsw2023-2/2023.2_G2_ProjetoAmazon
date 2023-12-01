import { Injectable } from '@nestjs/common';
import { type Response } from 'express';
import { join } from 'node:path';

@Injectable()
export class AppService {
  getPage(response: Response): any {
    return response.sendFile(join(`${process.cwd()}/src/pages/Home.html`));
  }
}

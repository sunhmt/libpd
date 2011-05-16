//
//  PdArray.h
//  libpd
//
//  Created by Rich E on 16/05/11.
//  Copyright 2011 Richard T. Eakin. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface PdArray : NSObject {
    NSString *name_;
    float *array_;
}

- (int)size;
- (void)readArrayNamed:(NSString *)arrayName;
- (float)floatAtIndex:(int)index;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface MFPFont : NSObject
{
    float mSize;
    int mUnit;
    unsigned int mFlags;
    NSString *mName;
}

- (void).cxx_destruct;
- (struct __CTFont *)createCTFontWithGraphics:(id)arg1;
- (void)setName:(id)arg1;
- (id)name;
- (void)setFlags:(unsigned int)arg1;
- (unsigned int)flags;
- (void)setUnit:(int)arg1;
- (int)unit;
- (void)setSize:(float)arg1;
- (float)size;

@end


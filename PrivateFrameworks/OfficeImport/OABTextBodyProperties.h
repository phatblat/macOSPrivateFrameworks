//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface OABTextBodyProperties : NSObject
{
}

+ (void)writeTextBodyProperties:(id)arg1 toShapeBase:(struct EshShapeBase *)arg2 state:(id)arg3;
+ (void)setIsAnchorCenter:(int)arg1 textBodyProperties:(id)arg2;
+ (void)setTextAnchor:(int)arg1 textBodyProperties:(id)arg2;
+ (void)setWrap:(int)arg1 textBodyProperties:(id)arg2;
+ (void)setAutoFit:(_Bool)arg1 textBodyProperties:(id)arg2;
+ (void)setTextDirection:(int)arg1 textBodyProperties:(id)arg2;
+ (void)setTextFlow:(int)arg1 textBodyProperties:(id)arg2;
+ (void)setTextRotation:(int)arg1 textBodyProperties:(id)arg2;
+ (void)readTextBodyProperties:(id)arg1 textBox:(const struct EshTextBox *)arg2 useDefaults:(_Bool)arg3 state:(id)arg4;

@end


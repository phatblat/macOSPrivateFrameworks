//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSButton.h"

@class NSString;

@interface PKContactButton : NSButton
{
    unsigned long long _type;
    NSString *_value;
}

+ (id)contactViewWithPhone:(id)arg1 email:(id)arg2 website:(id)arg3;
@property(readonly) NSString *value; // @synthesize value=_value;
@property(readonly) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)_popOverContent;
- (id)_contactURL;
- (id)_buttonTitle;
- (id)_imageGlyph;
- (void)buttonAction:(id)arg1;
- (id)_backgroundCirclePathInRect:(struct CGRect)arg1;
- (void)drawFocusRingMask;
- (struct CGRect)focusRingMaskBounds;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithType:(unsigned long long)arg1 value:(id)arg2;

@end

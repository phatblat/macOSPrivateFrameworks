//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ProVideo/FxPin.h>

@interface FxPinParameter : FxPin
{
    id defaultValue;
    Class customUI;
    struct FxPinParameterPriv *_paramPriv;
}

- (void)setCustomPinControl:(Class)arg1;
- (Class)customPinControl;
- (void)setDefaultValue:(id)arg1;
- (id)defaultValue;
- (void)dealloc;
- (id)init;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ProVideo/PAEFilterDefaultBase.h>

@interface PAEVignette : PAEFilterDefaultBase
{
}

- (id)dynamicPropertiesAtTime:(CDUnion_baaf6063)arg1 withError:(id *)arg2;
- (id)properties;
- (BOOL)frameSetup:(CDStruct_f5b31fc1)arg1 inputInfo:(CDStruct_4a07eeda)arg2 hardware:(char *)arg3 software:(char *)arg4;
- (BOOL)canThrowRenderOutput:(id)arg1 withInput:(id)arg2 withInfo:(CDStruct_f5b31fc1)arg3;
- (BOOL)addParameters;
- (void)getEdgeMode:(unsigned int *)arg1 withInfo:(CDStruct_f5b31fc1)arg2;
- (id)initWithAPIManager:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ProVideo/PAEGeneratorDefaultBase.h>

@interface PAEEquirectProject : PAEGeneratorDefaultBase
{
}

- (BOOL)frameCleanup;
- (BOOL)renderOutput:(id)arg1 withInfo:(CDStruct_f5b31fc1)arg2;
- (struct HGEquirectProjectParams)getParams:(CDStruct_f5b31fc1)arg1:(id)arg2:(id)arg3:(id)arg4;
- (double)getProjectionFOVYDegrees:(CDUnion_baaf6063)arg1;
- (PCMatrix44Tmpl_9c426645)getViewMatrix:(CDUnion_baaf6063)arg1;
- (BOOL)frameSetup:(CDStruct_f5b31fc1)arg1 hardware:(char *)arg2 software:(char *)arg3;
- (id)properties;
- (BOOL)variesOverTime;
- (BOOL)addParameters;
- (void)dealloc;
- (id)initWithAPIManager:(id)arg1;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class Pod, PodController;

__attribute__((visibility("hidden")))
@interface PodUpdaterController : NSObject
{
    int _updaterState;
    PodController *_podController;
    int _updaterError;
    unsigned int _instructions;
    Pod *_currentUpdatingPod;
    BOOL _formatAsFAT;
}

+ (void)deletePod:(id)arg1;
- (int)getOption:(int)arg1;
- (void)setOption:(int)arg1 toValue:(int)arg2;
- (void)operationComplete:(id)arg1;
- (void)operationFailed:(id)arg1;
- (void)progressMessage:(id)arg1;
- (void)progressUpdate:(id)arg1;
- (BOOL)isPodValid:(id)arg1;
- (id)podWithGUID:(unsigned short *)arg1;
- (void)setCurrentUpdatingPod:(id)arg1;
- (float)progress;
- (unsigned int)instructions;
- (int)updateError;
- (void)setState:(int)arg1;
- (int)state;
- (void)dealloc;
- (id)init;

@end

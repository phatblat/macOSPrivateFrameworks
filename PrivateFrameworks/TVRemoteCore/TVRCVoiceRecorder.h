//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TVRCDevice;

@interface TVRCVoiceRecorder : NSObject
{
    TVRCDevice *_device;
    BOOL _recordsAutomatically;
}

- (void).cxx_destruct;
- (void)stop;
- (void)start;
@property(nonatomic) BOOL recordsAutomatically;
- (id)_initWithDevice:(id)arg1;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

__attribute__((visibility("hidden")))
@interface TCMPSDeviceManager : NSObject
{
    id <NSObject> _deviceObserver;
    id <MTLDevice> _preferredDevice;
}

+ (id)sharedInstance;
@property(retain) id <MTLDevice> preferredDevice; // @synthesize preferredDevice=_preferredDevice;
- (void).cxx_destruct;
- (void)setPreferredDeviceFromDevices:(id)arg1;
- (BOOL)shouldPreferDevice:(id)arg1 overDevice:(id)arg2;
- (void)dealloc;
- (id)init;

@end

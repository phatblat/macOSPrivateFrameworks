//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface aura_DeviceHints : NSObject
{
    id <aura_Device> device;
    optional_488f82df usbSection;
    optional_fcefa02e sampleRate;
    optional_d968a044 inputStreamHints;
    optional_d968a044 outputStreamHints;
}

@property(nonatomic) optional_d968a044 outputStreamHints; // @synthesize outputStreamHints;
@property(nonatomic) optional_d968a044 inputStreamHints; // @synthesize inputStreamHints;
@property(nonatomic) optional_488f82df usbSection; // @synthesize usbSection;
@property(nonatomic) optional_fcefa02e sampleRate; // @synthesize sampleRate;
@property(nonatomic) __weak id <aura_Device> device; // @synthesize device;
- (id).cxx_construct;
- (void).cxx_destruct;

@end


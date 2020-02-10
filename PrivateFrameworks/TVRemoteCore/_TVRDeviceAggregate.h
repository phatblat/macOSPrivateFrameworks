//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class _TVRCHMServiceWrapper, _TVRCMRTelevisionWrapper, _TVRCRPCompanionLinkClientWrapper, _TVRXDevice;

@interface _TVRDeviceAggregate : NSObject
{
    _TVRCMRTelevisionWrapper *_mediaRemote;
    _TVRCRPCompanionLinkClientWrapper *_rapport;
    _TVRCHMServiceWrapper *_homeKit;
    _TVRXDevice *_publicDevice;
}

@property(retain, nonatomic) _TVRXDevice *publicDevice; // @synthesize publicDevice=_publicDevice;
@property(retain, nonatomic) _TVRCHMServiceWrapper *homeKit; // @synthesize homeKit=_homeKit;
@property(retain, nonatomic) _TVRCRPCompanionLinkClientWrapper *rapport; // @synthesize rapport=_rapport;
@property(retain, nonatomic) _TVRCMRTelevisionWrapper *mediaRemote; // @synthesize mediaRemote=_mediaRemote;
- (void).cxx_destruct;
- (id)bestImpl;
- (BOOL)isEmpty;

@end

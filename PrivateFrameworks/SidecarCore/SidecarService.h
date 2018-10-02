//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface SidecarService : NSObject
{
    NSArray *_devices;
}

+ (id)supportedPasteboardTypes;
+ (id)allSendTypes;
+ (id)allReturnTypes;
+ (id)returnTypes;
+ (id)name;
+ (id)servicesForPasteboardTypes:(id)arg1;
+ (id)servicesForPasteboardSendTypes:(id)arg1 returnTypes:(id)arg2;
+ (id)allServices;
+ (id)serviceWithName:(id)arg1;
+ (id)services;
- (void).cxx_destruct;
- (id)copyWithDevice:(id)arg1;
- (id)makeRequestWithResponder:(id)arg1 sendTypes:(id)arg2 returnTypes:(id)arg3;
- (id)makeRequest;
@property(readonly, nonatomic) NSString *localizedItemName;
@property(readonly, nonatomic) NSString *localizedDescription;
- (id)mutableRequestMessage;
- (id)serviceIdentifier;
@property(readonly, nonatomic, getter=isEnabled) _Bool enabled;
@property(readonly, nonatomic) NSArray *pasteboardTypes;
@property(readonly, nonatomic) NSArray *sendTypes; // @dynamic sendTypes;
@property(readonly, nonatomic) NSArray *returnTypes;
@property(readonly, nonatomic) NSString *name;
@property(copy, nonatomic) NSArray *devices; // @dynamic devices;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AudioServerApplication/ASAObject.h>

@class ASAAudioFormat, NSArray, NSString;

@interface ASAStream : ASAObject
{
}

- (id)coreAudioClassName;
- (id)diagnosticDescriptionWithIndent:(id)arg1 walkTree:(BOOL)arg2;
@property(readonly, copy, nonatomic) NSArray *controls;
@property(readonly, copy, nonatomic) NSArray *controlObjectIDs; // @dynamic controlObjectIDs;
@property(readonly, copy, nonatomic) NSArray *availablePhysicalFormats; // @dynamic availablePhysicalFormats;
@property(readonly, copy, nonatomic) NSArray *availableVirtualFormats; // @dynamic availableVirtualFormats;
@property(readonly, nonatomic, getter=isPhysicalFormatSettable) BOOL physicalFormatSettable;
@property(copy, nonatomic) ASAAudioFormat *physicalFormat; // @dynamic physicalFormat;
@property(readonly, nonatomic, getter=isVirtualFormatSettable) BOOL virtualFormatSettable;
@property(copy, nonatomic) ASAAudioFormat *virtualFormat; // @dynamic virtualFormat;
@property(readonly, nonatomic) unsigned int latency; // @dynamic latency;
@property(readonly, nonatomic) unsigned int startingChannel; // @dynamic startingChannel;
@property(readonly, nonatomic) unsigned int terminalType; // @dynamic terminalType;
@property(readonly, nonatomic, getter=isOutput) BOOL output; // @dynamic output;
@property(readonly, nonatomic, getter=isInput) BOOL input; // @dynamic input;
@property(readonly, nonatomic, getter=isActive) BOOL active; // @dynamic active;
@property(copy, nonatomic) NSString *name; // @dynamic name;

@end


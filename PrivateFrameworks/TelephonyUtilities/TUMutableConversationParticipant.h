//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <TelephonyUtilities/TUConversationParticipant.h>

@class TUHandle;

@interface TUMutableConversationParticipant : TUConversationParticipant
{
}

+ (BOOL)supportsSecureCoding;

// Remaining properties
@property(nonatomic, getter=isAudioEnabled) BOOL audioEnabled; // @dynamic audioEnabled;
@property(copy, nonatomic) TUHandle *handle; // @dynamic handle;
@property(nonatomic) unsigned long long identifier; // @dynamic identifier;
@property(nonatomic, getter=isMuted) BOOL muted; // @dynamic muted;
@property(nonatomic) long long streamToken; // @dynamic streamToken;
@property(nonatomic, getter=isVideoEnabled) BOOL videoEnabled; // @dynamic videoEnabled;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@interface SASetDeviceTTSMuteState : SABaseClientBoundCommand
{
}

+ (id)setDeviceTTSMuteStateWithDictionary:(id)arg1 context:(id)arg2;
+ (id)setDeviceTTSMuteState;
- (BOOL)requiresResponse;
@property(nonatomic) BOOL textToSpeechIsMuted;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

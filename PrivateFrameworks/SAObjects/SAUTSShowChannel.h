//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/SABaseClientBoundCommand.h>

@class SAUTSTvChannel;

@interface SAUTSShowChannel : SABaseClientBoundCommand
{
}

+ (id)showChannelWithDictionary:(id)arg1 context:(id)arg2;
+ (id)showChannel;
- (BOOL)requiresResponse;
@property(retain, nonatomic) SAUTSTvChannel *channel;
- (id)encodedClassName;
- (id)groupIdentifier;

@end


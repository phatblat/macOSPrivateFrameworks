//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FrontBoardServices/FBSWorkspaceSceneEvent.h>

@class FBSSceneMessage;

@interface FBSWorkspaceSceneMessageEvent : FBSWorkspaceSceneEvent
{
    FBSSceneMessage *_message;
}

@property(retain, nonatomic) FBSSceneMessage *message; // @synthesize message=_message;
- (void).cxx_destruct;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;

@end


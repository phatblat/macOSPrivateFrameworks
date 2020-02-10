//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GKCustomTournamentDelegate.h"

@class GKPlayer, GKTournament;

@interface GKCustomTournamentManager : NSObject <GKCustomTournamentDelegate>
{
    GKTournament *_tournament;
    GKPlayer *_creator;
}

@property(retain, nonatomic) GKPlayer *creator; // @synthesize creator=_creator;
@property(nonatomic) __weak GKTournament *tournament; // @synthesize tournament=_tournament;
- (void).cxx_destruct;
- (void)declineInvitationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)acceptInvitationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)removeCreator:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)addCreator:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeInvitees:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)addInvitees:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end

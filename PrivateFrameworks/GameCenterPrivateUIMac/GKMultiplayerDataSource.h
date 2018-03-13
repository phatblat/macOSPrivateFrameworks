//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GameCenterPrivateUIMac/GKBasicCollectionViewDataSource.h>

@class GKMultiplayerFooterView, GKMultiplayerHeaderView, NSMutableDictionary, NSMutableOrderedSet, NSString;

@interface GKMultiplayerDataSource : GKBasicCollectionViewDataSource
{
    BOOL _automatchAddedToMinInHeader;
    BOOL _removingEnabled;
    BOOL _autoMatching;
    long long _minPlayers;
    long long _maxPlayers;
    long long _automatchPlayers;
    NSString *_footerStatus;
    GKMultiplayerFooterView *_footerView;
    NSMutableOrderedSet *_players;
    NSMutableDictionary *_playerStatus;
    GKMultiplayerHeaderView *_headerView;
    NSMutableOrderedSet *_orderedPlayerIDList;
}

@property(retain, nonatomic) NSMutableOrderedSet *orderedPlayerIDList; // @synthesize orderedPlayerIDList=_orderedPlayerIDList;
@property(retain, nonatomic) GKMultiplayerHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) NSMutableDictionary *playerStatus; // @synthesize playerStatus=_playerStatus;
@property(nonatomic) BOOL autoMatching; // @synthesize autoMatching=_autoMatching;
@property(retain, nonatomic) NSMutableOrderedSet *players; // @synthesize players=_players;
@property(retain, nonatomic) GKMultiplayerFooterView *footerView; // @synthesize footerView=_footerView;
@property(copy, nonatomic) NSString *footerStatus; // @synthesize footerStatus=_footerStatus;
@property(nonatomic) BOOL removingEnabled; // @synthesize removingEnabled=_removingEnabled;
@property(nonatomic) BOOL automatchAddedToMinInHeader; // @synthesize automatchAddedToMinInHeader=_automatchAddedToMinInHeader;
@property(nonatomic) long long automatchPlayers; // @synthesize automatchPlayers=_automatchPlayers;
@property(nonatomic) long long maxPlayers; // @synthesize maxPlayers=_maxPlayers;
@property(nonatomic) long long minPlayers; // @synthesize minPlayers=_minPlayers;
- (void)restoreOrderOfPlayers;
- (void)replaceContactPlayers:(id)arg1 withNormalPlayers:(id)arg2;
- (id)firstInvitedContactPlayer;
- (void)setAutoMatching:(BOOL)arg1 withVisibleCells:(id)arg2;
- (BOOL)participantShouldBeRemovable:(id)arg1 atIndexPath:(id)arg2;
- (void)setParticipantsWithPlayers:(id)arg1 automatchPlayerCount:(long long)arg2 andStatuses:(id)arg3;
- (id)participantForAutoMatchNumber:(long long)arg1;
- (id)participantForPlayer:(id)arg1;
- (void)failedToInvitePlayers;
- (id)playersInvited;
- (id)playersToBeInvited;
- (id)readyPlayers;
- (id)playersWithStatus:(long long)arg1;
- (id)guestPlayers;
- (id)currentPlayers;
- (void)finishRevertingPlayers;
- (void)setStatus:(long long)arg1 forPlayers:(id)arg2;
- (BOOL)shouldRevertStatus:(long long)arg1;
- (void)removePlayers:(id)arg1;
- (void)addPlayers:(id)arg1 withStatus:(long long)arg2 replaceAutomatches:(BOOL)arg3;
- (void)addPlayers:(id)arg1 withStatus:(long long)arg2;
- (long long)maxAvailablePlayers;
- (struct _NSRange)playerRange;
- (BOOL)havePendingPlayers;
- (long long)statusForPlayer:(id)arg1;
- (void)refreshContentsForDataType:(unsigned int)arg1 userInfo:(id)arg2 updateNotifier:(id)arg3;
- (void)updateHeaderText;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)dealloc;
- (id)init;
- (void)updateParticipantsAnimated:(BOOL)arg1;
- (void)configureCollectionView:(id)arg1;

@end


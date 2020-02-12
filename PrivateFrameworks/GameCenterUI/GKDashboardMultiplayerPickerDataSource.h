//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GameCenterUI/GKCollectionDataSource.h>

@class GKContactDataSource, GKTournament, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary;

@interface GKDashboardMultiplayerPickerDataSource : GKCollectionDataSource
{
    BOOL _showsAllFriends;
    BOOL _searching;
    BOOL _supportsNearby;
    BOOL _excludesContacts;
    BOOL _isSegmented;
    BOOL _browsingForNearbyPlayers;
    BOOL _didLoad;
    NSMutableDictionary *_playerStates;
    long long _maxSelectable;
    GKTournament *_tournament;
    id <GKDashboardNearbyBrowserDelegate> _nearbyDelegate;
    CDUnknownBlockType _nearbyPlayersChangedHandler;
    long long _currentSegment;
    NSArray *_contactPlayers;
    NSArray *_friendPlayers;
    NSArray *_recentPlayers;
    NSMutableArray *_nearbyPlayers;
    NSArray *_searchPlayers;
    long long _maxFriendsVisible;
    NSArray *_hiddenPlayers;
    GKContactDataSource *_contactSource;
}

@property(retain, nonatomic) GKContactDataSource *contactSource; // @synthesize contactSource=_contactSource;
@property(nonatomic) BOOL didLoad; // @synthesize didLoad=_didLoad;
@property(nonatomic) BOOL browsingForNearbyPlayers; // @synthesize browsingForNearbyPlayers=_browsingForNearbyPlayers;
@property(retain, nonatomic) NSArray *hiddenPlayers; // @synthesize hiddenPlayers=_hiddenPlayers;
@property(nonatomic) long long maxFriendsVisible; // @synthesize maxFriendsVisible=_maxFriendsVisible;
@property(retain, nonatomic) NSArray *searchPlayers; // @synthesize searchPlayers=_searchPlayers;
@property(retain, nonatomic) NSMutableArray *nearbyPlayers; // @synthesize nearbyPlayers=_nearbyPlayers;
@property(retain, nonatomic) NSArray *recentPlayers; // @synthesize recentPlayers=_recentPlayers;
@property(retain, nonatomic) NSArray *friendPlayers; // @synthesize friendPlayers=_friendPlayers;
@property(retain, nonatomic) NSArray *contactPlayers; // @synthesize contactPlayers=_contactPlayers;
@property(nonatomic) long long currentSegment; // @synthesize currentSegment=_currentSegment;
@property(nonatomic) BOOL isSegmented; // @synthesize isSegmented=_isSegmented;
@property(nonatomic) BOOL excludesContacts; // @synthesize excludesContacts=_excludesContacts;
@property(copy, nonatomic) CDUnknownBlockType nearbyPlayersChangedHandler; // @synthesize nearbyPlayersChangedHandler=_nearbyPlayersChangedHandler;
@property(nonatomic) id <GKDashboardNearbyBrowserDelegate> nearbyDelegate; // @synthesize nearbyDelegate=_nearbyDelegate;
@property(nonatomic) BOOL supportsNearby; // @synthesize supportsNearby=_supportsNearby;
@property(nonatomic, getter=isSearching) BOOL searching; // @synthesize searching=_searching;
@property(nonatomic) BOOL showsAllFriends; // @synthesize showsAllFriends=_showsAllFriends;
@property(retain, nonatomic) GKTournament *tournament; // @synthesize tournament=_tournament;
@property(nonatomic) long long maxSelectable; // @synthesize maxSelectable=_maxSelectable;
@property(retain, nonatomic) NSMutableDictionary *playerStates; // @synthesize playerStates=_playerStates;
- (void).cxx_destruct;
- (BOOL)_canShowMoreFriends;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)numberOfSectionsInCurrentSegment;
- (void)setNearbyPlayer:(id)arg1 reachable:(BOOL)arg2;
- (void)setNearbyPlayerID:(id)arg1 reachable:(BOOL)arg2;
- (void)searchTextHasChanged;
- (id)searchKeyForSection:(long long)arg1;
- (id)indexPathForFirstPlayer;
- (id)indexPathsForPlayer:(id)arg1;
- (id)firstIndexPathForPlayer:(id)arg1;
- (void)updateSelectionStateForCollectionView:(id)arg1 indexPaths:(id)arg2;
- (BOOL)cellSelectableStateAtIndexPath:(id)arg1 playerState:(unsigned long long)arg2;
- (void)clearSelection;
@property(readonly, nonatomic) NSArray *selectedPlayers;
- (id)playerForPlayerID:(id)arg1;
- (id)playerForIndexPath:(id)arg1;
- (id)playersForSection:(long long)arg1 ignoreSearch:(BOOL)arg2;
- (id)itemForIndexPath:(id)arg1;
- (double)preferredCollectionHeight;
- (id)headerTextForSection:(long long)arg1;
@property(readonly, nonatomic) long long unmodifiedItemCount;
- (long long)itemCount;
@property(readonly, nonatomic) NSDictionary *contactSkipIndexes;
@property(readonly, nonatomic) NSArray *contactSkipValues;
@property(readonly, nonatomic) NSDictionary *contactSectionHeaderIndexes;
@property(readonly, nonatomic) NSArray *contactSectionHeaders;
@property(readonly, nonatomic) long long numberOfContacts;
- (void)loadDataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setupCollectionView:(id)arg1;
- (id)initWithMaxSelectable:(long long)arg1 hiddenPlayers:(id)arg2;

@end


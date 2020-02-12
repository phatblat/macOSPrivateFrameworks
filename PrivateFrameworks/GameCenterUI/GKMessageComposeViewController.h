//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UXViewController.h"

#import "SOInputLineViewControllerDelegate.h"

@class GKChatDisplayController, GKTournament, NSArray, NSButton, NSMutableArray, NSMutableDictionary, NSString, NSURL, NSView, SOInputLineViewController, SORecipientBarViewController;

@interface GKMessageComposeViewController : UXViewController <SOInputLineViewControllerDelegate>
{
    NSURL *_shareURL;
    id <GKMessageComposeViewControllerDelegate> _delegate;
    id <GKDashboardNearbyBrowserDelegate> _nearbyDelegate;
    GKTournament *_tournament;
    long long _maximumSelectablePlayersForPicker;
    NSArray *_currentlySelectedPlayersForPicker;
    NSView *_recipientView;
    NSButton *_sendButton;
    NSView *_messageBodyView;
    NSString *_inviteMessage;
    SORecipientBarViewController *_recipientBarViewController;
    GKChatDisplayController *_chatDisplayController;
    SOInputLineViewController *_inputLineViewController;
    NSMutableArray *_messageRecipients;
    NSMutableArray *_legacyPlayers;
    NSMutableArray *_messageSendRecipients;
    NSMutableDictionary *_addedGKPlayers;
    long long _maxNumberPlayers;
}

+ (BOOL)canSendText;
@property long long maxNumberPlayers; // @synthesize maxNumberPlayers=_maxNumberPlayers;
@property(retain, nonatomic) NSMutableDictionary *addedGKPlayers; // @synthesize addedGKPlayers=_addedGKPlayers;
@property(retain, nonatomic) NSMutableArray *messageSendRecipients; // @synthesize messageSendRecipients=_messageSendRecipients;
@property(retain, nonatomic) NSMutableArray *legacyPlayers; // @synthesize legacyPlayers=_legacyPlayers;
@property(retain, nonatomic) NSMutableArray *messageRecipients; // @synthesize messageRecipients=_messageRecipients;
@property(retain, nonatomic) SOInputLineViewController *inputLineViewController; // @synthesize inputLineViewController=_inputLineViewController;
@property(retain, nonatomic) GKChatDisplayController *chatDisplayController; // @synthesize chatDisplayController=_chatDisplayController;
@property(retain, nonatomic) SORecipientBarViewController *recipientBarViewController; // @synthesize recipientBarViewController=_recipientBarViewController;
@property(retain, nonatomic) NSString *inviteMessage; // @synthesize inviteMessage=_inviteMessage;
@property NSView *messageBodyView; // @synthesize messageBodyView=_messageBodyView;
@property NSButton *sendButton; // @synthesize sendButton=_sendButton;
@property NSView *recipientView; // @synthesize recipientView=_recipientView;
@property(retain, nonatomic) NSArray *currentlySelectedPlayersForPicker; // @synthesize currentlySelectedPlayersForPicker=_currentlySelectedPlayersForPicker;
@property(nonatomic) long long maximumSelectablePlayersForPicker; // @synthesize maximumSelectablePlayersForPicker=_maximumSelectablePlayersForPicker;
@property(retain, nonatomic) GKTournament *tournament; // @synthesize tournament=_tournament;
@property(nonatomic) __weak id <GKDashboardNearbyBrowserDelegate> nearbyDelegate; // @synthesize nearbyDelegate=_nearbyDelegate;
@property(nonatomic) __weak id <GKMessageComposeViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSURL *shareURL; // @synthesize shareURL=_shareURL;
- (void).cxx_destruct;
- (void)_sendMessage:(id)arg1 withChat:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_sendMessageWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)checkAndUpdateLegacyPlayers:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)cancelAction:(id)arg1;
- (void)sendAction:(id)arg1;
- (void)pickerDidFinishWithPlayers:(id)arg1;
- (id)getHiddenPlayers;
- (id)addedGKPlayerForIMHandle:(id)arg1;
- (void)_recipientsSelected:(id)arg1;
- (void)addRecipientButtonPressed:(id)arg1;
- (void)dealloc;
- (void)connectToAgent;
- (void)preparePresentationForMinPlayers:(long long)arg1 maxPlayers:(long long)arg2 shareURL:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)viewDidLoad;
- (id)initWithMessage:(id)arg1 maxNumberOfPlayers:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

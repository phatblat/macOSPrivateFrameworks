//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSRemoteViewController.h"

#import "RPBroadcastActivityViewServiceHostProtocol.h"

@class NSArray, NSExtension, NSString, RPBroadcastActivityViewServiceExtensionHostContext;

@interface RPBroadcastActivityHostRemoteNSViewController : NSRemoteViewController <RPBroadcastActivityViewServiceHostProtocol>
{
    id <RPBroadcastActivityHostRemoteNSViewControllerDelegate> _delegate;
    NSExtension *_extension;
    NSArray *_inputItems;
    RPBroadcastActivityViewServiceExtensionHostContext *_hostContext;
}

+ (void)instantiateViewControllerWithExtension:(id)arg1 inputItems:(id)arg2 connectionHandler:(CDUnknownBlockType)arg3;
@property(retain, nonatomic) RPBroadcastActivityViewServiceExtensionHostContext *hostContext; // @synthesize hostContext=_hostContext;
@property(retain, nonatomic) NSArray *inputItems; // @synthesize inputItems=_inputItems;
@property(retain, nonatomic) NSExtension *extension; // @synthesize extension=_extension;
@property(nonatomic) __weak id <RPBroadcastActivityHostRemoteNSViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (oneway void)extensionDidFinishWithLaunchURL:(id)arg1 broadcastURL:(id)arg2 extensionBundleID:(id)arg3 cancelled:(BOOL)arg4;
- (oneway void)presentBroadcastActivitySheet;
- (void)viewDidLoad;
- (void)loadView;
- (id)serviceViewControllerInterface;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


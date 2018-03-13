//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FRJSMessagingDelegate.h"
#import "FRJSObjectDelegate.h"
#import "NSKeyedUnarchiverDelegate.h"

@class CKStoreClient, FRJSObject, NSArray, NSMutableDictionary, NSString;

@interface FRBundleInterface : NSObject <NSKeyedUnarchiverDelegate, FRJSMessagingDelegate, FRJSObjectDelegate>
{
    CKStoreClient *_storeClient;
    struct OpaqueWKBundle *_bundle;
    struct OpaqueWKBundlePage *_page;
    struct OpaqueWKBundleFrame *_frame;
    struct OpaqueWKBundleScriptWorld *_world;
    struct OpaqueWKBundleDOMWindowExtension *_windowExtension;
    FRJSObject *_rootObject;
    NSArray *_rootObjectFunctions;
    NSArray *_rootObjectProperties;
    NSMutableDictionary *_eventListeners;
    NSMutableDictionary *_contextMenus;
    NSMutableDictionary *_activeContextMenu;
}

+ (id)allowedMessageClasses;
@property(retain, nonatomic) NSMutableDictionary *activeContextMenu; // @synthesize activeContextMenu=_activeContextMenu;
@property(readonly, nonatomic) NSMutableDictionary *contextMenus; // @synthesize contextMenus=_contextMenus;
@property(readonly, nonatomic) NSMutableDictionary *eventListeners; // @synthesize eventListeners=_eventListeners;
@property(readonly, nonatomic) NSArray *rootObjectProperties; // @synthesize rootObjectProperties=_rootObjectProperties;
@property(readonly, nonatomic) NSArray *rootObjectFunctions; // @synthesize rootObjectFunctions=_rootObjectFunctions;
@property(readonly, nonatomic) FRJSObject *rootObject; // @synthesize rootObject=_rootObject;
@property(readonly, nonatomic) struct OpaqueWKBundleDOMWindowExtension *windowExtension; // @synthesize windowExtension=_windowExtension;
@property(readonly, nonatomic) struct OpaqueWKBundleScriptWorld *world; // @synthesize world=_world;
@property(readonly, nonatomic) struct OpaqueWKBundleFrame *frame; // @synthesize frame=_frame;
@property(readonly, nonatomic) struct OpaqueWKBundlePage *page; // @synthesize page=_page;
@property(readonly, nonatomic) struct OpaqueWKBundle *bundle; // @synthesize bundle=_bundle;
@property(readonly, nonatomic) CKStoreClient *storeClient; // @synthesize storeClient=_storeClient;
- (void).cxx_destruct;
- (void)contextMenuDismissed;
- (void)contextMenuItemClicked:(id)arg1;
- (struct OpaqueWKArray *)_contextMenuItemsForJSContextMenuNamed:(id)arg1 appendingDefaultMenu:(struct OpaqueWKArray *)arg2 withDOMElement:(struct OpaqueJSValue *)arg3 context:(struct OpaqueJSContext *)arg4;
- (Class)unarchiver:(id)arg1 cannotDecodeObjectOfClassName:(id)arg2 originalClasses:(id)arg3;
- (id)object:(id)arg1 callFunction:(id)arg2 withArguments:(id)arg3;
- (BOOL)hasFunction:(id)arg1 forObject:(id)arg2;
- (id)object:(id)arg1 getProperty:(id)arg2;
- (BOOL)hasProperty:(id)arg1 forObject:(id)arg2;
- (void)dispatchGlobalEvent:(id)arg1 withEventObject:(id)arg2;
- (void)dispatchEvent:(id)arg1 withEventObject:(id)arg2;
- (struct OpaqueJSValue *)_callJavaScriptFunction:(const char *)arg1 inContext:(struct OpaqueJSContext *)arg2 thisObject:(struct OpaqueJSValue *)arg3 argumentCount:(unsigned long long)arg4 arguments:(const struct OpaqueJSValue **)arg5;
- (struct OpaqueJSValue *)_getJavaScriptProperty:(const char *)arg1 inContext:(struct OpaqueJSContext *)arg2 thisObject:(struct OpaqueJSValue *)arg3;
- (void)didReceiveMessage:(id)arg1 messageBody:(id)arg2;
- (id)sendSynchronousMessage:(id)arg1 messageBody:(id)arg2;
- (void)sendMessage:(id)arg1 messageBody:(id)arg2;
- (id)initWithBundle:(struct OpaqueWKBundle *)arg1 userData:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


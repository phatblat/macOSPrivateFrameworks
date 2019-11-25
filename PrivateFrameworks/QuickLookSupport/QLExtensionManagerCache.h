//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSMapTable, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_semaphore>;

@interface QLExtensionManagerCache : NSObject
{
    NSObject<OS_dispatch_queue> *_accessMatchingExtensionsQueue;
    NSObject<OS_dispatch_queue> *_waitForExtensionListQueue;
    BOOL _isMatchingExtensions;
    NSDictionary *_matchingAttributes;
    id _matchingContext;
    NSMutableDictionary *_matchingExtensions;
    NSMapTable *_qlExtensions;
    NSObject<OS_dispatch_semaphore> *_waitForExtensionsSemaphore;
}

@property(retain) NSObject<OS_dispatch_semaphore> *waitForExtensionsSemaphore; // @synthesize waitForExtensionsSemaphore=_waitForExtensionsSemaphore;
@property(nonatomic) BOOL isMatchingExtensions; // @synthesize isMatchingExtensions=_isMatchingExtensions;
@property(retain, nonatomic) NSMapTable *qlExtensions; // @synthesize qlExtensions=_qlExtensions;
@property(retain, nonatomic) NSMutableDictionary *matchingExtensions; // @synthesize matchingExtensions=_matchingExtensions;
@property(retain, nonatomic) id matchingContext; // @synthesize matchingContext=_matchingContext;
@property(retain, nonatomic) NSDictionary *matchingAttributes; // @synthesize matchingAttributes=_matchingAttributes;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_synchronouslyWaitForExtensionListIfNeeded;
- (BOOL)_supportedContentTypesFromExtension:(id)arg1 matches:(id)arg2 allowMatchingWithParentTypes:(BOOL)arg3;
- (id)_bestMatchingExtensionsFromSupportingExtensions:(id)arg1 includingExtensionsWithSupportingParentTypes:(BOOL)arg2 byContentType:(id)arg3;
- (id)extensionWithMatchingAttributes:(id)arg1 allowExtensionsForParentTypes:(BOOL)arg2 extensionPath:(id)arg3;
- (BOOL)hasExtensionWithMatchingAttributes:(id)arg1;
- (void)_didReceiveNewMatchingExtensionList:(id)arg1;
- (void)endMatchingExtensions;
- (void)beginMatchingExtensions;
- (id)initWithMatchingAttributes:(id)arg1;

@end


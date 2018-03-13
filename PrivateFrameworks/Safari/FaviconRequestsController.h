//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMapTable, WBSSiteMetadataManager;

__attribute__((visibility("hidden")))
@interface FaviconRequestsController : NSObject
{
    NSMapTable *_tokenToRequestToken;
    WBSSiteMetadataManager *_manager;
    long long _priority;
    struct CGSize _size;
}

+ (id)new;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(nonatomic) long long priority; // @synthesize priority=_priority;
@property(readonly, nonatomic) WBSSiteMetadataManager *manager; // @synthesize manager=_manager;
- (void).cxx_destruct;
- (void)cancelAllRegistrations;
- (void)registerOneTimeRequestForURLString:(id)arg1 withToken:(id)arg2 returnDefaultIconIfNoneAvailable:(BOOL)arg3 iconSize:(struct CGSize)arg4 completion:(CDUnknownBlockType)arg5;
- (void)registerOneTimeRequestForURLString:(id)arg1 withToken:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)registerRequestForURLString:(id)arg1 withToken:(id)arg2 returnDefaultIconIfNoneAvailable:(BOOL)arg3 iconSize:(struct CGSize)arg4 completion:(CDUnknownBlockType)arg5;
- (void)registerRequestForURLString:(id)arg1 withToken:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)registerRequestForDomain:(id)arg1 withToken:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)initWithSiteMetadataManager:(id)arg1;
- (id)init;

@end


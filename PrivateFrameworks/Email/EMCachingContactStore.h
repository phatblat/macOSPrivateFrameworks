//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CNContactStore, EFLazyCache;

@interface EMCachingContactStore : NSObject
{
    CNContactStore *_cnStore;
    EFLazyCache *_displayNameCache;
}

@property(retain, nonatomic) EFLazyCache *displayNameCache; // @synthesize displayNameCache=_displayNameCache;
@property(readonly, nonatomic) CNContactStore *cnStore; // @synthesize cnStore=_cnStore;
- (void).cxx_destruct;
- (void)_invalidateDisplayNameCache;
- (id)_fetchDisplayNameForEmailAddress:(id)arg1 abbreviated:(BOOL)arg2;
- (id)displayNameForEmailAddress:(id)arg1 abbreviated:(BOOL)arg2;
- (id)displayNameForEmailAddress:(id)arg1;
- (id)initWithStore:(id)arg1;
- (id)init;

@end


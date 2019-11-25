//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"
#import "TPPolicy.h"

@class NSArray, NSDictionary, NSString;

@interface TPPolicy : NSObject <TPPolicy, NSSecureCoding>
{
    BOOL _unknownRedactions;
    NSArray *_modelToCategory;
    NSDictionary *_categoriesByView;
    NSDictionary *_introducersByCategory;
    NSArray *_keyViewMapping;
    unsigned long long _version;
}

+ (BOOL)supportsSecureCoding;
+ (id)policyWithModelToCategory:(id)arg1 categoriesByView:(id)arg2 introducersByCategory:(id)arg3 keyViewMapping:(id)arg4 unknownRedactions:(BOOL)arg5 version:(unsigned long long)arg6;
@property BOOL unknownRedactions; // @synthesize unknownRedactions=_unknownRedactions;
@property(nonatomic) unsigned long long version; // @synthesize version=_version;
@property(retain, nonatomic) NSArray *keyViewMapping; // @synthesize keyViewMapping=_keyViewMapping;
@property(retain, nonatomic) NSDictionary *introducersByCategory; // @synthesize introducersByCategory=_introducersByCategory;
@property(retain, nonatomic) NSDictionary *categoriesByView; // @synthesize categoriesByView=_categoriesByView;
@property(retain, nonatomic) NSArray *modelToCategory; // @synthesize modelToCategory=_modelToCategory;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)mapKeyToView:(id)arg1;
- (id)viewsForModel:(id)arg1;
- (id)excludedViewsForModel:(id)arg1;
- (BOOL)peerInCategory:(id)arg1 canAccessView:(id)arg2;
- (BOOL)trustedPeerInCategory:(id)arg1 canIntroduceCategory:(id)arg2;
- (id)categoryForModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


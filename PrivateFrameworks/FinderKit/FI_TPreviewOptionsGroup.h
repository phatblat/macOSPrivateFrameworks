//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSSet, NSString;

__attribute__((visibility("hidden")))
@interface FI_TPreviewOptionsGroup : NSObject
{
    struct TString _title;
    struct TNSRef<NSArray<NSString *>, void> _optionKeys;
    _Bool _hasCompositeKeys;
    struct unique_ptr<const std::__1::vector<TMetadataAttribute, std::__1::allocator<TMetadataAttribute>>, std::__1::default_delete<const std::__1::vector<TMetadataAttribute, std::__1::allocator<TMetadataAttribute>>>> _groupAttributes;
}

+ (id)groupForTitle:(const struct TString *)arg1 validKeys:(id)arg2 hasCompositeKeys:(_Bool)arg3;
+ (id)groupForTitle:(const struct TString *)arg1 validKeys:(id)arg2;
@property(readonly, nonatomic) _Bool hasCompositeKeys; // @synthesize hasCompositeKeys=_hasCompositeKeys;
- (id).cxx_construct;
- (void).cxx_destruct;
- (struct TString)displayNameForKey:(const struct TString *)arg1;
@property(readonly, nonatomic) _Bool hasSpotlightAttributes; // @dynamic hasSpotlightAttributes;
@property(readonly, retain, nonatomic) NSArray *optionKeys; // @dynamic optionKeys;
@property(readonly, retain, nonatomic) NSString *title; // @dynamic title;
@property(readonly, retain, nonatomic) NSSet *defaultKeys; // @dynamic defaultKeys;
- (id)initWithTitle:(const struct TString *)arg1 metaDataGroup:(const struct TMetadataGroup *)arg2;
- (id)initWithTitle:(const struct TString *)arg1 validKeys:(id)arg2 hasCompositeKeys:(_Bool)arg3;

@end

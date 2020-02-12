//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AudioServerDriver/ASDDSPItemInfo.h>

@class NSArray, NSDictionary, NSString;

@interface ASDDSPGraphInfo : ASDDSPItemInfo
{
    NSString *_path;
    NSString *_text;
    NSArray *_includePaths;
    NSDictionary *_substitutions;
}

@property(copy, nonatomic) NSDictionary *substitutions; // @synthesize substitutions=_substitutions;
@property(copy, nonatomic) NSArray *includePaths; // @synthesize includePaths=_includePaths;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(copy, nonatomic) NSString *path; // @synthesize path=_path;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)initWithDictionary:(id)arg1 resourcePath:(id)arg2;

@end


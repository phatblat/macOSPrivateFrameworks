//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FileProvider/FPSpotlightQueryDescriptor.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface FPSearchQueryDescriptor : FPSpotlightQueryDescriptor
{
    NSString *_searchQueryString;
}

@property(copy) NSString *searchQueryString; // @synthesize searchQueryString=_searchQueryString;
- (void).cxx_destruct;
- (BOOL)keepCollectorsAlive;
- (unsigned long long)hash;
- (BOOL)isEqualToItemQueryDescriptor:(id)arg1;
- (id)_scopes;
- (void)augmentQueryContext:(id)arg1;
- (id)queryStringForMountPoint:(id)arg1;

@end

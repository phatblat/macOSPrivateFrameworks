//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NUFileSourceDefinition.h"

@class PAImageRequestCacheHint;

@interface PAFileSourceDefinition : NUFileSourceDefinition
{
    PAImageRequestCacheHint *_cacheHint;
}

@property(retain) PAImageRequestCacheHint *cacheHint; // @synthesize cacheHint=_cacheHint;
- (void).cxx_destruct;
- (id)generateSourceNodeWithIdentifier:(id)arg1 error:(out id *)arg2;

@end


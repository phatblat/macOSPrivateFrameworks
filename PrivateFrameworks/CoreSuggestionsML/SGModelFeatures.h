//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PMLSparseVector, SGModelSource;

@interface SGModelFeatures : NSObject
{
    SGModelSource *_source;
    PMLSparseVector *_vector;
}

- (void).cxx_destruct;
- (id)sessionDescriptor;
- (id)source;
- (id)vector;
- (id)initWithSource:(id)arg1 vector:(id)arg2;

@end


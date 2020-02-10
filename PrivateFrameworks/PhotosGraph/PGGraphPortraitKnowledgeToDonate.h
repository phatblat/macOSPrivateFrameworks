//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary;

@interface PGGraphPortraitKnowledgeToDonate : NSObject
{
    NSDictionary *_topics;
    NSArray *_namedEntities;
    NSArray *_locationNamedEntities;
}

@property(readonly, nonatomic) NSArray *locationNamedEntities; // @synthesize locationNamedEntities=_locationNamedEntities;
@property(readonly, nonatomic) NSArray *namedEntities; // @synthesize namedEntities=_namedEntities;
@property(readonly, nonatomic) NSDictionary *topics; // @synthesize topics=_topics;
- (void).cxx_destruct;
- (id)initWithTopics:(id)arg1 namedEntities:(id)arg2 locationNamedEntities:(id)arg3;

@end

//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PGGraph;

@interface PGSearchMetadataComputer : NSObject
{
    PGGraph *_graph;
}

@property(readonly) PGGraph *graph; // @synthesize graph=_graph;
- (void).cxx_destruct;
- (id)_blacklistedMeaningsByMeaning;
- (id)_sceneWhitelist;
- (id)_mePersonUUID;
- (id)searchMetadataWithOptions:(id)arg1;
- (id)initWithGraph:(id)arg1;

@end

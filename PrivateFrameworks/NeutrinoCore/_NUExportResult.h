//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NeutrinoCore/_NURenderResult.h>

#import "NUExportResult.h"

@class NSString, NSURL, NUImageGeometry;

@interface _NUExportResult : _NURenderResult <NUExportResult>
{
    NSURL *_destinationURL;
    NUImageGeometry *_geometry;
}

@property(retain) NUImageGeometry *geometry; // @synthesize geometry=_geometry;
@property(retain) NSURL *destinationURL; // @synthesize destinationURL=_destinationURL;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) id <NURenderStatistics> statistics;
@property(readonly) Class superclass;

@end


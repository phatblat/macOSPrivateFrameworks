//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AXVHighlightPointView;

__attribute__((visibility("hidden")))
@interface SCRVisualsEncircledPoint : NSObject
{
    char *_encircledPointEnabled;
    AXVHighlightPointView *__pointView;
    struct CGPoint _highlightPoint;
}

@property(retain, nonatomic, setter=_setPointView:) AXVHighlightPointView *_pointView; // @synthesize _pointView=__pointView;
@property(nonatomic) struct CGPoint highlightPoint; // @synthesize highlightPoint=_highlightPoint;
@property(nonatomic) char *encircledPointEnabled; // @synthesize encircledPointEnabled=_encircledPointEnabled;
- (void).cxx_destruct;
- (id)init;

@end


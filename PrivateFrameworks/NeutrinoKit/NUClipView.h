//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSClipView.h"

@class NUViewGeometry;

@interface NUClipView : NSClipView
{
    BOOL _shouldCenterContent;
    NUViewGeometry *_geometry;
}

@property(retain, nonatomic) NUViewGeometry *geometry; // @synthesize geometry=_geometry;
@property(nonatomic) BOOL shouldCenterContent; // @synthesize shouldCenterContent=_shouldCenterContent;
- (void).cxx_destruct;
- (struct CGRect)constrainBoundsRect:(struct CGRect)arg1;

@end


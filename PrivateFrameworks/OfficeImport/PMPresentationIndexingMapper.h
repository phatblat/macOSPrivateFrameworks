//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OfficeImport/CMIndexingMapper.h>

@class PDPresentation;

__attribute__((visibility("hidden")))
@interface PMPresentationIndexingMapper : CMIndexingMapper
{
}

- (void)mapElement:(id)arg1 atIndex:(unsigned long long)arg2 withState:(id)arg3 isLastElement:(BOOL)arg4;
- (void)_indexSlide:(id)arg1 intoString:(id)arg2;
- (void)_indexDrawable:(id)arg1 intoString:(id)arg2;
- (void)_indexTable:(id)arg1 intoString:(id)arg2;
- (void)_indexTextBody:(id)arg1 intoString:(id)arg2;
- (void)mapWithState:(id)arg1;

// Remaining properties
@property(readonly) PDPresentation *document; // @dynamic document;

@end


//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/ashchauhan/Desktop/SampleApp/OnePoint/Runtime/Common/IOM/ISavePoints.java
//
//  Created by ashchauhan on 6/20/14.
//

#import <Foundation/Foundation.h>

#import "ISavePoint.h"
@protocol ISavePoints < NSObject>

- (BOOL)getUseQuestionLabels;
- (void)setUseQuestionLabels:(BOOL)value;
- (int)getCapacity;
- (void)setCapacity:(int)value;
- (int)getCount;
- (void)addSavePoints:(id<ISavePoint>)item;
- (void)addRange:(id)collection;
- (void)clear;
- (BOOL)contains:(id<ISavePoint>)item;
- (BOOL)containsKey:(NSString *)key;
- (NSMutableArray*)getEnumerator ;
- (NSMutableArray*)getRange:(int) index withCount:(int) count;
- (int)indexOf:(id<ISavePoint>)item;
- (int)indexOf:(id<ISavePoint>)item withIndex:(int)index;
- (int)indexOf:(id<ISavePoint>)item withIndex:(int)index withCount:(int)count;
- (void)insert:(int)index withISavePoint:(id<ISavePoint>)item;
- (void)insertRange:(int)index withCollection:(id)collection;
- (int)lastIndexOf:(id<ISavePoint>)item;
- (int)lastIndexOf:(id<ISavePoint>)item withIndex:(int)index;
- (int)lastIndexOf:(id<ISavePoint>)item withIndex:(int)index withCount:(int)count;

- (BOOL)remove:(id<ISavePoint>)item;
- (int)removeAll:(id)match;
- (void)removeAt:(int)index;
- (void)removeRange:(int)index withCount:(int)count;
- (void)reverse;
- (void)reverse:(int)index withCount:(int)count;
- (void)sort;
- (void)sort:(id)comparer;
- (void)sort:(int)index withCount:(int)count withComparator:(id)comparer;

- (NSMutableArray *)toSavePointsArray;
- (void)trimExcess;
- (BOOL)trueForAllWithId:(id)match;
- (id<ISavePoint>)get___idx:(int)index;
- (void)set___idx:(int)index withISavePoint:(id<ISavePoint>)value;
- (id<ISavePoint>)get___idxWithNSString:(NSString *)key;
- (void)set___idxWithNSString:(NSString *)key withISavePoint:(id<ISavePoint>)value;
- (id<ISavePoint>)getCachedPoint;
- (void)setCachedPoint:(id<ISavePoint>)value;

- (id)objectAtIndex:(int)index;

@end


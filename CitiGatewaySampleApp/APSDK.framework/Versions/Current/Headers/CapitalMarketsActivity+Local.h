//
//  CapitalMarketsActivity+Local.h
//  AnyPresence SDK
//

/*!
 @header CapitalMarketsActivity+Local
 @abstract Local category for CapitalMarketsActivity class
 */

#import "CapitalMarketsActivity.h"

/*!
 @category CapitalMarketsActivity (Local)
 @abstract Adds local query capabilities to CapitalMarketsActivity.
 @discussion Serves as a strongly-typed wrapper around @link //apple_ref/occ/cat/APObject(Local) @/link methods.
 */ 
@interface CapitalMarketsActivity (Local)

/*!
 @method allLocalWithOffset:limit:
 @abstract Fetches objects matching query scope "all" from local cache, with pagination.
 @param offset Number of objects to skip.
 @param limit Maximum number of objects to fetch.
 @result Array of objects.
 */
+ (NSArray *)allLocalWithOffset:(NSUInteger)offset limit:(NSUInteger)limit;

/*!
 @method exactMatchLocalWithParams:offset:limit:
 @abstract Fetches objects matching query scope "exact_match" from local cache, with pagination.
 @param params Scope parameter - params.
 @param offset Number of objects to skip.
 @param limit Maximum number of objects to fetch.
 @result Array of objects.
 */
+ (NSArray *)exactMatchLocalWithParams:(NSDictionary *)params offset:(NSUInteger)offset limit:(NSUInteger)limit;

/*!
 @method activitiesLocalWithYear:offset:limit:
 @abstract Fetches objects matching query scope "activities" from local cache, with pagination.
 @param year Scope parameter - year.
 @param offset Number of objects to skip.
 @param limit Maximum number of objects to fetch.
 @result Array of objects.
 */
+ (NSArray *)activitiesLocalWithYear:(NSNumber *)year offset:(NSUInteger)offset limit:(NSUInteger)limit;

@end
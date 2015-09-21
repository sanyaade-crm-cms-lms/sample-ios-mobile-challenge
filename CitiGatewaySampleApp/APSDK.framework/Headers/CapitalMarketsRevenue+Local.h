//
//  CapitalMarketsRevenue+Local.h
//  AnyPresence SDK
//

/*!
 @header CapitalMarketsRevenue+Local
 @abstract Local category for CapitalMarketsRevenue class
 */

#import "CapitalMarketsRevenue.h"

/*!
 @category CapitalMarketsRevenue (Local)
 @abstract Adds local query capabilities to CapitalMarketsRevenue.
 @discussion Serves as a strongly-typed wrapper around @link //apple_ref/occ/cat/APObject(Local) @/link methods.
 */ 
@interface CapitalMarketsRevenue (Local)

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
 @method revenuesLocalWithRegion:year:offset:limit:
 @abstract Fetches objects matching query scope "revenues" from local cache, with pagination.
 @param region Scope parameter - region.
 @param year Scope parameter - year.
 @param offset Number of objects to skip.
 @param limit Maximum number of objects to fetch.
 @result Array of objects.
 */
+ (NSArray *)revenuesLocalWithRegion:(NSString *)region year:(NSNumber *)year offset:(NSUInteger)offset limit:(NSUInteger)limit;

@end
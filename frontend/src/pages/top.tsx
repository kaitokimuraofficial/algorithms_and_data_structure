import React from 'react';
import { useQuery } from '@apollo/client';
import gql from 'graphql-tag';

const TEST = gql`

`;

export default function Top() {
    const { loading, data } = useQuery(TEST, {});
    if (loading) return <p>Loading ...</p>;
    return <h1>{data.testField}</h1>;
}